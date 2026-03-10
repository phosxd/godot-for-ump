#ifndef TAGLIB_REGISTER_TYPES_H
#define TAGLIB_REGISTER_TYPES_H

void register_taglib_types();
void unregister_taglib_types();
void initialize_taglib_module(ModuleInitializationLevel p_level);
void uninitialize_taglib_module(ModuleInitializationLevel p_level);

#endif
