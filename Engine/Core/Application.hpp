#pragma once

namespace EchoXStudios
{
    namespace EchoCore
    {
        class Application
        {
        private:

        public:
            Application();
            ~Application();

            bool Initialize() = 0;
            void Update() = 0;
            void Draw() = 0;
            void Shutdown() = 0;
        }
    }
}
