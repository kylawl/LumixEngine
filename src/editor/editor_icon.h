#pragma once


#include "universe/universe.h"


namespace Lux
{


struct Component;
struct Entity;
class IRenderDevice;
class Renderer;


class EditorIcon
{
	friend class EditorApp;
	public:
		void create(Entity& entity, const Component& cmp);
		void destroy();
		void render(Renderer* renderer, IRenderDevice& render_device);
		void show();
		void hide();
		//H3DNode getHandle() const { return m_handle; }
		Entity getEntity() const { return m_entity; }

		static void createResources(const char* base_path);

	private:
		Entity m_entity;
		/*H3DNode m_handle;
		static H3DRes s_geom;
		static H3DRes s_materials[2];*/
};


}