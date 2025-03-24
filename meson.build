project('examify', 'cpp')

gtkmm_dep = dependency('gtkmm-4.0', version: '>= 4.6.0')
#cpr_dep = dependency('cpr.pc', version: '>= 1.11.1')


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
  'main.cpp',
  'models/MultiChoiceQuestion.cpp',
  'utility/LocalAiConnection.cpp',
  'generators/FakeQuestionGenerator.cpp'
)

executable('examify',
  sources,
  dependencies: [
    gtkmm_dep,
  ],
  include_directories: include_dir
)
