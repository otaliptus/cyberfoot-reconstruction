// Address: 005e0be0
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

int FUN_005e0be0(undefined4 param_1,int param_2,int param_3)

{
  undefined *puVar1;
  int iVar2;
  int local_14;
  
  if (param_3 < *(int *)(PTR_DAT_0066ae98 + param_2 * 0x568 + 0x510) + 1) {
    iVar2 = 6;
    puVar1 = PTR_DAT_0066ae98;
    do {
      puVar1 = puVar1 + 4;
      if (*(int *)(*(int *)PTR_DAT_0066af70 + 0x1b0 +
                  *(int *)(puVar1 + param_3 * 0x50 + param_2 * 0x568 + -0x54) * 0x2f8) == 1) {
        return *(int *)(puVar1 + param_3 * 0x50 + param_2 * 0x568 + -0x54);
      }
      iVar2 = iVar2 + -1;
      local_14 = param_3;
    } while (iVar2 != 0);
  }
  else {
    local_14 = *(int *)(PTR_DAT_0066ae98 +
                       *(int *)(PTR_DAT_0066ae98 + param_2 * 0x568 + 0x510) * 0x50 + param_2 * 0x568
                       );
  }
  return local_14;
}

