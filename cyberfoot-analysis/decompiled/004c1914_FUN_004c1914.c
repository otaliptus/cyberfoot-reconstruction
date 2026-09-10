// Address: 004c1914
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

undefined4 FUN_004c1914(int param_1,int param_2)

{
  undefined4 uVar1;
  int iVar2;
  
  iVar2 = (int)*(short *)(param_1 + 4) - (int)*(short *)(param_2 + 4);
  if (iVar2 == 0) {
    iVar2 = (uint)*(ushort *)(param_1 + 6) - (uint)*(ushort *)(param_2 + 6);
  }
  if (iVar2 == 0) {
    iVar2 = (uint)*(ushort *)(param_1 + 8) - (uint)*(ushort *)(param_2 + 8);
  }
  if (iVar2 == 0) {
    iVar2 = (uint)*(ushort *)(param_1 + 10) - (uint)*(ushort *)(param_2 + 10);
  }
  if (iVar2 == 0) {
    iVar2 = (uint)*(ushort *)(param_1 + 10) - (uint)*(ushort *)(param_2 + 10);
  }
  if (iVar2 == 0) {
    iVar2 = (uint)*(ushort *)(param_1 + 0xc) - (uint)*(ushort *)(param_2 + 0xc);
  }
  if (iVar2 == 0) {
    iVar2 = (uint)*(ushort *)(param_1 + 0xe) - (uint)*(ushort *)(param_2 + 0xe);
  }
  if (iVar2 == 0) {
    iVar2 = *(int *)(param_1 + 0x10) - *(int *)(param_2 + 0x10);
  }
  if (iVar2 == 0) {
    return 1;
  }
  if (iVar2 < 1) {
    uVar1 = 0;
  }
  else {
    uVar1 = 2;
  }
  return uVar1;
}

