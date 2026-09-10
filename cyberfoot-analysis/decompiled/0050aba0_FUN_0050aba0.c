// Address: 0050aba0
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void FUN_0050aba0(int param_1,undefined1 param_2)

{
  undefined4 *puVar1;
  int iVar2;
  int iVar3;
  
  if ((*(int *)(param_1 + 0x78) != 0) &&
     (iVar2 = *(int *)(*(int *)(param_1 + 0x78) + 8), -1 < iVar2 + -1)) {
    iVar3 = 0;
    do {
      puVar1 = (undefined4 *)FUN_0041e01c(*(undefined4 *)(param_1 + 0x78),iVar3);
      (*(code *)*puVar1)(puVar1[1],param_1,param_2);
      iVar3 = iVar3 + 1;
      iVar2 = iVar2 + -1;
    } while (iVar2 != 0);
  }
  return;
}

