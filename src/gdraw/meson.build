#
# Source definitions
#
sources_gdraw = files(
)
include_directories_gdraw = include_directories(
  'include'
)


#
# Targets
#
gdraw = library(
  'gdraw',
  sources_gdraw,
  include_directories : include_directories_gdraw,
  dependencies : [ radrr_dep ],
)
gdraw_dep = declare_dependency(
  include_directories : include_directories_gdraw,
  link_with : [ gdraw ],
)
