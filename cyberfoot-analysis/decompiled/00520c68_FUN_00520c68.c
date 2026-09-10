// Address: 00520c68
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

undefined * FUN_00520c68(undefined4 param_1,int *param_2)

{
  int iVar1;
  undefined *puVar2;
  undefined4 uVar3;
  undefined1 local_18 [11];
  char local_d;
  undefined4 local_c;
  undefined4 local_8;
  
  local_8 = param_1;
  local_c = FUN_004208d4(param_2);
  iVar1 = (**(code **)(*param_2 + 0xc))(param_2,&local_d,1);
  puVar2 = (undefined *)0x0;
  if (iVar1 == 1) {
    if (local_d == '\n') {
      iVar1 = (**(code **)(*param_2 + 0xc))(param_2,local_18,10);
      if (iVar1 == 10) {
        puVar2 = PTR_PTR_005162d8;
      }
    }
    else {
      if ((local_d == '\v') &&
         (iVar1 = (**(code **)(*param_2 + 0xc))(param_2,local_18,0xb), iVar1 == 0xb)) {
        uVar3 = FUN_00520c44();
        puVar2 = (undefined *)FUN_00520bf4(uVar3,local_18);
        if (puVar2 != (undefined *)0x0) {
          return puVar2;
        }
        return PTR_PTR_005162d8;
      }
      FUN_004208f4(param_2);
      puVar2 = (undefined *)FUN_005204f8(local_8,param_2);
    }
  }
  return puVar2;
}

