#include <gazebo/gazebo.hh>


namespace gazebo{
    class WorldPLuginMyRobot : public WorldPlugin{
        public: WorldPLuginMyRobot():WorldPlugin(){
            printf("Welcome to Cihan's World!\n");
        }

        public: void Load(physics::WorldPtr _world, sdf::ElementPtr _sdf){
        }
    };
    GZ_REGISTER_WORLD_PLUGIN(WorldPLuginMyRobot)
}
