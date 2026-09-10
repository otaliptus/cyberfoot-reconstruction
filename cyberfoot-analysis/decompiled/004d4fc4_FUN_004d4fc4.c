// Address: 004d4fc4
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void FUN_004d4fc4(undefined4 param_1,undefined4 *param_2)

{
  BOOL BVar1;
  DWORD local_20;
  DWORD local_1c;
  LPVOID local_18;
  undefined4 local_14;
  undefined4 uStack_10;
  
  local_18 = (LPVOID)*param_2;
  local_14 = param_2[1];
  uStack_10 = param_2[2];
  if (local_18 != (LPVOID)0x0) {
    BVar1 = VirtualProtect(local_18,6,0x40,&local_20);
    if (BVar1 == 0) {
      FUN_0040f904();
    }
    FUN_00402a04(&local_14,local_18,6);
    BVar1 = VirtualProtect(local_18,6,local_20,&local_1c);
    if (BVar1 == 0) {
      FUN_0040f904();
    }
  }
  return;
}

