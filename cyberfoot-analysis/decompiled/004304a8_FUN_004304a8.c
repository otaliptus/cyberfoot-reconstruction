// Address: 004304a8
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void FUN_004304a8(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = *(int *)(param_1 + 0x28);
  if ((*(int *)(iVar1 + 8) != 0) && (*(int *)(iVar1 + 0x14) == 0)) {
    FUN_0043062c();
    if (*(int *)(iVar1 + 0x30) == 0) {
      GetObjectA(*(HANDLE *)(iVar1 + 8),0x54,(LPVOID)(iVar1 + 0x18));
      *(undefined4 *)(iVar1 + 0x30) = 0x28;
      *(undefined4 *)(iVar1 + 0x34) = *(undefined4 *)(iVar1 + 0x1c);
      *(undefined4 *)(iVar1 + 0x38) = *(undefined4 *)(iVar1 + 0x20);
      *(undefined2 *)(iVar1 + 0x3c) = 1;
      *(short *)(iVar1 + 0x3e) = *(short *)(iVar1 + 0x28) * *(short *)(iVar1 + 0x2a);
    }
    uVar2 = FUN_0042f3e4(*(undefined4 *)(iVar1 + 8),*(undefined4 *)(iVar1 + 0x10),
                         *(undefined4 *)(iVar1 + 0x10),0,iVar1 + 0x18);
    *(undefined4 *)(iVar1 + 0x14) = uVar2;
  }
  return;
}

