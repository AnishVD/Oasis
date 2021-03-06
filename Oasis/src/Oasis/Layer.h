#include"../oepch.h"
#pragma once
#include"Core.h"
	
#include "Events/Event.h"
namespace Oasis {
	class OE_API Layer {
	public:
		Layer(const std::string& name = "Layer");
		virtual ~Layer();
		virtual void onAttach();	
		virtual void onDetach();
		virtual void onUpdate();
		virtual void onEvent(Event& e);
		inline const std::string& getName() const { return m_debugName; }
	private:
		std::string m_debugName;
	};
}