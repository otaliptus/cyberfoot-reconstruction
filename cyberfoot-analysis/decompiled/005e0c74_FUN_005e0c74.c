// Address: 005e0c74
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

int FUN_005e0c74(undefined4 param_1,int param_2,int param_3)

{
  undefined *puVar1;
  int iVar2;
  
  iVar2 = 6;
  puVar1 = PTR_DAT_0066ae98;
  do {
    puVar1 = puVar1 + 4;
    if (*(int *)(*(int *)PTR_DAT_0066af70 + 0x1b0 +
                *(int *)(puVar1 + param_3 * 0x50 + param_2 * 0x568 + -0x54) * 0x2f8) == 6) {
      return *(int *)(puVar1 + param_3 * 0x50 + param_2 * 0x568 + -0x54);
    }
    iVar2 = iVar2 + -1;
  } while (iVar2 != 0);
  return param_3;
}

