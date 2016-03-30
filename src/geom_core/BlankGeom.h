//
// This file is released under the terms of the NASA Open Source Agreement (NOSA)
// version 1.3 as detailed in the LICENSE file which accompanies this software.
//
//
//////////////////////////////////////////////////////////////////////

#if !defined(VSPBLANKGEOM__INCLUDED_)
#define VSPBLANKGEOM__INCLUDED_

#include "Geom.h"


//==== Blank Geom ====//
class BlankGeom : public Geom
{
public:
    BlankGeom( Vehicle* vehicle_ptr );
    virtual ~BlankGeom();

    virtual int GetNumMainSurfs()
    {
        return 0;
    };

    virtual void UpdateSurf();
    virtual void UpdateDrawObj();
    virtual void LoadDrawObjs(vector< DrawObj* > & draw_obj_vec);

    virtual void ReadV2File( xmlNodePtr &root );

    BoolParm m_PointMassFlag;
    Parm     m_PointMass;
    Parm     m_AxisLength;
    Parm     m_PointMassIxx;
    Parm     m_PointMassIyy;
    Parm     m_PointMassIzz;
    Parm     m_PointMassIxy;
    Parm     m_PointMassIxz;
    Parm     m_PointMassIyz;

    vec3d m_Origin;
    vector < vec3d > m_Axis;

protected:

};

#endif // !defined(VSPBLANKGEOM__INCLUDED_)
