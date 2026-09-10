// Address: 00472a68
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void FUN_00472a68(int param_1)

{
  char cVar1;
  int iVar2;
  int iVar3;
  
  if (*(short *)(param_1 + 0x42) != 0) {
    (**(code **)(param_1 + 0x40))(*(undefined4 *)(param_1 + 0x44),param_1);
  }
  iVar2 = *(int *)(*(int *)(param_1 + 0x30) + 8);
  if (-1 < iVar2 + -1) {
    iVar3 = 0;
    do {
      (**(code **)(**(int **)(*(int *)(*(int *)(param_1 + 0x30) + 4) + iVar3 * 4) + 0x30))();
      iVar3 = iVar3 + 1;
      iVar2 = iVar2 + -1;
    } while (iVar2 != 0);
  }
  if ((*(byte *)(param_1 + 0x1c) & 0x10) != 0) {
    iVar2 = *(int *)(param_1 + 4);
    cVar1 = FUN_00403c10(iVar2,PTR_PTR_0047ce6c);
    if ((cVar1 != '\0') && (*(int *)(iVar2 + 0x250) != 0)) {
      (**(code **)(**(int **)(iVar2 + 0x250) + 0xc))();
    }
  }
  return;
}

