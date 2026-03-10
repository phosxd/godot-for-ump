#include "register_types.h"

#include "tag_file.h"

#ifdef TOOLS_ENABLED
#include "core/engine.h"
#include "core/config/engine.h"
#endif

void register_taglib_types() {

	ClassDB::register_class<TagFile>();
}

void unregister_taglib_types() {
}

void initialize_taglib_module(ModuleInitializationLevel p_level) {
	if (p_level != MODULE_INITIALIZATION_LEVEL_SCENE) {
		return;
	}
}

void uninitialize_taglib_module(ModuleInitializationLevel p_level) {
	if (p_level != MODULE_INITIALIZATION_LEVEL_SCENE) {
		return;
	}
}
