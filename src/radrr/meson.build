#
# Source definitions
#
sources_radrr = files(
  'rrCpu.c'
)
include_directories_radrr = include_directories(
    'include'
)


#
# Target
#
radrr = library(
  'radrr',
  sources_radrr,
  include_directories: include_directories_radrr,
)
radrr_dep = declare_dependency(
  include_directories : include_directories_radrr,
  link_with : [ radrr ],
)