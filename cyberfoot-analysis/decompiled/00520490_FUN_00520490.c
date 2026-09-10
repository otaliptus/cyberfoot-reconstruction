// Address: 00520490
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

int FUN_00520490(undefined4 param_1,int *param_2)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  undefined1 local_9;
  int *local_8;
  
  local_8 = param_2;
  FUN_004208d4(param_2);
  iVar1 = (**(code **)(*local_8 + 0xc))(local_8,&local_9,1);
  if (iVar1 == 1) {
    uVar2 = FUN_00520468();
    iVar1 = FUN_00520434(uVar2,local_9);
    do {
      iVar3 = iVar1;
      if (iVar3 == 0) break;
      iVar1 = (**(code **)(iVar3 + 0x2c))(iVar3,local_8);
    } while (iVar3 != iVar1);
    FUN_004208f4(local_8);
  }
  else {
    iVar3 = 0;
  }
  return iVar3;
}

