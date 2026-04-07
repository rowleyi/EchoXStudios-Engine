#pragma once

namespace EchoXStudios
{
    namespace EchoCore
    {
        class Engine
        {
        private:

        public:
            Engine() = default;
            ~Engine() { Shutdown(); }

            static bool Initialize();
            static void Update();
            static void Draw();
            static void Shutdown();
        }
    }
}
