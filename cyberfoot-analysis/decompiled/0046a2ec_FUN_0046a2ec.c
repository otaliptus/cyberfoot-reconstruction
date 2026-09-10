// Address: 0046a2ec
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

undefined4 FUN_0046a2ec(int param_1,undefined4 param_2,undefined1 *param_3,char param_4)

{
  char cVar1;
  undefined1 *puVar2;
  int iVar3;
  
  if (((param_4 != '\0') && (*(int *)(param_1 + 0x19c) != 0)) &&
     (iVar3 = *(int *)(*(int *)(param_1 + 0x19c) + 8) + -1, puVar2 = param_3, -1 < iVar3)) {
    do {
      FUN_0041e01c(*(undefined4 *)(param_1 + 0x19c),iVar3,puVar2);
      cVar1 = FUN_0046a234();
      param_3 = &stack0xfffffffc;
      if (cVar1 != '\0') break;
      iVar3 = iVar3 + -1;
      param_3 = &stack0xfffffffc;
      puVar2 = &stack0xfffffffc;
    } while (iVar3 != -1);
  }
  if ((*(int *)(param_1 + 0x198) != 0) &&
     (iVar3 = *(int *)(*(int *)(param_1 + 0x198) + 8) + -1, -1 < iVar3)) {
    do {
      FUN_0041e01c(*(undefined4 *)(param_1 + 0x198),iVar3,param_3);
      cVar1 = FUN_0046a234();
      if (cVar1 != '\0') {
        return 0;
      }
      iVar3 = iVar3 + -1;
      param_3 = &stack0xfffffffc;
    } while (iVar3 != -1);
  }
  return 0;
}

