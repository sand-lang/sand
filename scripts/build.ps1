$build_directory = "$PSScriptRoot\\..\\build"

mkdir -Force $build_directory
Push-Location $build_directory

cmake ..
cmake --build .

Pop-Location
