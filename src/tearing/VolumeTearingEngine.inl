#pragma once
#include "VolumeTearingEngine.h"

#include <sofa/core/visual/VisualParams.h>
#include <sofa/helper/types/RGBAColor.h>

namespace sofa::component::engine
{
template <class DataTypes>
VolumeTearingEngine<DataTypes>::VolumeTearingEngine()
	: l_topology(initLink("topology", "link to the topology container"))
	, m_topology(nullptr)
{}
template <class DataTypes>
void VolumeTearingEngine<DataTypes>::init()
{}

template <class DataTypes>
void VolumeTearingEngine<DataTypes>::reinit()
{
	update();
}

template <class DataTypes>
void VolumeTearingEngine<DataTypes>::doUpdate()
{}


template <class DataTypes>
void VolumeTearingEngine<DataTypes>::draw(const core::visual::VisualParams* vparams)
{}


} //namespace sofa::component::engine