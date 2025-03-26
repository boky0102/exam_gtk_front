project('examify', 'cpp')

gtkmm_dep = dependency('gtkmm-4.0', version: '>= 4.6.0')
#cpr_dep = dependency('cpr.pc', version: '>= 1.11.1')

gtest_dep = dependency('gtest', main : true, required : false)


# don't forget to add dependencies here when you add them
deps = [gtkmm_dep, gtest_dep]

source_dir = [
  'utility/LocalAiConnection.cpp'
]

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
    gtkmm_dep,
    gtest_dep
  ],
  include_directories: include_dir
)

# create lib for tests to link to
main_lib = library('testLib',
  sources: sources,
  include_directories: include_dir,
  dependencies: [
    gtkmm_dep,
    gtest_dep
  ]

)

subdir('test')












