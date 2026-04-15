#
# Source definitions
#
sources_radrr = files(
)


#
# Target
#
radrr = library(
  'radrr',
  sources_radrr,
)
radrr_dep = declare_dependency(
  include_directories : include_directories( 'include' ),
  link_with : [ radrr ],
)