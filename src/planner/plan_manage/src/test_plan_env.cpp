//
//  test_plan_env.cpp
//  test
//
//  Created by 张淑慧 on 2024/5/11.
//

#include "test_plan_env.hpp"


void test_ray_caster(){
    printf("test_ray_caster");
    RayCaster raycaster;
    Eigen::Vector3d start = Eigen::Vector3d(2.5, 2.5, 2.5);
    Eigen::Vector3d end = Eigen::Vector3d(1.5, 1.5, 1.5);
    raycaster.setInput(start, end);
    
    Eigen::Vector3d ray_pt;
    bool ret = raycaster.step(ray_pt);
    printf("ret: %d, ray_pt[0]: %f, ray_pt[1]: %f, ray_pt[2]: %f\n",
           ret, ray_pt[0], ray_pt[1], ray_pt[2]);
    
}

void test_grid_map_init_map(ros::NodeHandle &nh){
    printf("test_grid_map_init_map\n");
    GridMap::Ptr grid_map_;
    grid_map_.reset(new GridMap);
    grid_map_->initMap(nh);
}

