project('examify', 'cpp')

gtkmm_dep = dependency('gtkmm-4.0', version: '>= 4.6.0')
#cpr_dep = dependency('cpr.pc', version: '>= 1.11.1')

#gtest_dep = dependency('gtest', main : true, required : false)

gtest = subproject('gtest')
gtest_dep = gtest.get_variable('gtest_dep')
gmock_dep = gtest.get_variable('gmock_dep')

# don't forget to add dependencies here when you add them
deps = [gtkmm_dep, gtest_dep, gmock_dep]


include_dir = include_directories([
  'include',
  'generators/include',
  'models/include',
  'utility/include',
  'types'
])


sources = files(
  'models/MultiChoiceQuestion.cpp',
  'utility/LocalAiConnection.cpp',
  'generators/FakeQuestionGenerator.cpp'
)

executable('examify',
  sources: [
    'main.cpp',
    sources
  ],
  dependencies: [
    gtkmm_dep
  ],
  include_directories: include_dir
)

#create lib for tests to link to
main_lib = shared_library('testLib',
  sources: sources,
  include_directories: include_dir,
  dependencies: [
    gtkmm_dep,
  ],
  install: true
)

subdir('test')












