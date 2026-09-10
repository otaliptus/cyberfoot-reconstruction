// Address: 00652868
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

int FUN_00652868(int param_1)

{
  int iVar1;
  int iVar2;
  
  iVar2 = 1;
  FUN_004032c8(100);
  switch(*(undefined4 *)(*(int *)PTR_DAT_0066b5b8 + 0x18 + param_1 * 0x130)) {
  case 0x10:
    iVar2 = 0xf;
    break;
  case 0x11:
    iVar2 = 0x23;
    break;
  case 0x12:
    iVar2 = 0x37;
    break;
  case 0x13:
    iVar2 = 0x46;
    break;
  case 0x14:
    iVar2 = 0x4b;
  }
  iVar1 = FUN_004032c8(5);
  iVar2 = iVar2 + iVar1 + *(int *)(*(int *)PTR_DAT_0066b5b8 + 0x30 + param_1 * 0x130);
  if (iVar2 < 1) {
    iVar2 = 1;
  }
  if (100 < iVar2) {
    iVar2 = 100;
  }
  return iVar2;
}

