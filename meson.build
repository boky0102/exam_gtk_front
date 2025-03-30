project('examify', 'cpp', default_options: ['cpp_std=c++23'])

gtkmm_dep = dependency('gtkmm-4.0', version: '>= 4.6.0')

gtest = subproject('gtest')
gtest_dep = gtest.get_variable('gtest_dep')
gmock_dep = gtest.get_variable('gmock_dep')

cpr = subproject('cpr')
cpr_dep = cpr.get_variable('cpr_dep')

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
  'generators/FakeQuestionGenerator.cpp',
  'models/ExamSettings.cpp'
)

executable('examify',
  sources: [
    'main.cpp',
    sources
  ],
  dependencies: [
    gtkmm_dep,
    cpr_dep
  ],
  include_directories: include_dir
)

#create lib for tests to link to
main_lib = shared_library('testLib',
  sources: sources,
  include_directories: include_dir,
  dependencies: [
    gtkmm_dep,
    cpr_dep
  ],
  install: true
)

subdir('test')












