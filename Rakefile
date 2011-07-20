require 'rake/clean'
task :default => 'car'

rule '.o' => ['.cc'] do |t|
  sh 'g++', '-o', t.name, '-c', '-std=c++0x', t.source, '-I./include', '-I./src'
end

cc_src_files = FileList['src/**/*.cc']
obj_files = cc_src_files.map {|f| f.sub(/cc$/, 'o')}
CLEAN.include(obj_files)

file 'car' => obj_files do |t|
  sh "g++ -o #{t.name} #{obj_files.join ' '}"
end
CLOBBER.include('car')
