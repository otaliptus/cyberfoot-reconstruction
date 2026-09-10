// Address: 00417b08
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

undefined1 FUN_00417b08(undefined4 *param_1,undefined4 param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int local_14;
  
  local_14 = FUN_00417ae8(param_2);
  local_14 = local_14 + -1;
  if (0 < local_14) {
    do {
      if (param_1 != (undefined4 *)0x0) {
        iVar1 = FUN_00417b00(param_1);
        iVar2 = FUN_00417b00(*param_1);
        iVar1 = iVar1 + -1;
        if (0 < iVar1) {
          iVar4 = 1;
          do {
            iVar3 = FUN_00417b00(param_1[iVar4]);
            if (iVar2 != iVar3) {
              return 0;
            }
            iVar4 = iVar4 + 1;
            iVar1 = iVar1 + -1;
          } while (iVar1 != 0);
        }
        param_1 = (undefined4 *)*param_1;
      }
      local_14 = local_14 + -1;
    } while (local_14 != 0);
  }
  return 1;
}

