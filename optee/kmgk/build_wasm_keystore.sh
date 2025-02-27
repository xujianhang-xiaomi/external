WAMRC=../../../prebuilts/clang/linux/wasm/wamrc

rm ./kmgk/keymaster/ta/*.wo
rm ../optee_nuttx/optee_nuttx/wasm/wasm_ta_framework.wo
rm 88A89F14B906EF4EBD96940EFFDABEF4
rm 88A89F14B906EF4EBD96940EFFDABEF4.aot

make -f Makefile-wasm
${WAMRC} --target=thumbv8m.main --target-abi=gnueabihf --cpu=cortex-m55 --enable-indirect-mode --disable-llvm-intrinsics -o 88A89F14B906EF4EBD96940EFFDABEF4.aot 88A89F14B906EF4EBD96940EFFDABEF4
cp 88A89F14B906EF4EBD96940EFFDABEF4.aot ../../../vendor/bes/boards/best1600_ep/n60/src/etc/ta/88A89F14B906EF4EBD96940EFFDABEF4