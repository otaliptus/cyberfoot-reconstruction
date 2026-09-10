// Address: 00520bf4
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

undefined4 FUN_00520bf4(int param_1,undefined4 *param_2)

{
  char cVar1;
  undefined4 *puVar2;
  int iVar3;
  undefined4 local_f;
  undefined4 uStack_b;
  undefined2 uStack_7;
  undefined1 uStack_5;
  
  local_f = *param_2;
  uStack_b = param_2[1];
  uStack_7 = *(undefined2 *)(param_2 + 2);
  uStack_5 = *(undefined1 *)((int)param_2 + 10);
  iVar3 = *(int *)(param_1 + 8) + -1;
  if (-1 < iVar3) {
    do {
      puVar2 = (undefined4 *)FUN_0041e01c(param_1,iVar3);
      cVar1 = FUN_00409658(puVar2 + 1,&local_f,0xb);
      if (cVar1 != '\0') {
        return *puVar2;
      }
      iVar3 = iVar3 + -1;
    } while (iVar3 != -1);
  }
  return 0;
}

