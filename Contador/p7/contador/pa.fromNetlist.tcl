
# PlanAhead Launch Script for Post-Synthesis pin planning, created by Project Navigator

create_project -name contador -dir "C:/Users/Acer/Desktop/Arquitectura/p7/contador/planAhead_run_4" -part xc7a100tcsg324-3
set_property design_mode GateLvl [get_property srcset [current_run -impl]]
set_property edif_top_file "C:/Users/Acer/Desktop/Arquitectura/p7/contador/contador.ngc" [ get_property srcset [ current_run ] ]
add_files -norecurse { {C:/Users/Acer/Desktop/Arquitectura/p7/contador} }
set_param project.pinAheadLayout  yes
set_property target_constrs_file "contador.ucf" [current_fileset -constrset]
add_files [list {contador.ucf}] -fileset [get_property constrset [current_run]]
link_design
