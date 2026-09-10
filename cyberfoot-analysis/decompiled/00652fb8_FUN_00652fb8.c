// Address: 00652fb8
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

undefined4 FUN_00652fb8(void)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  
  uVar3 = 0;
  iVar1 = GetSystemMetrics(0);
  iVar2 = GetSystemMetrics(1);
  if ((iVar1 == 0x500) && (iVar2 == 800)) {
    uVar3 = 1;
  }
  if ((iVar1 == 0x556) && (iVar2 == 0x300)) {
    uVar3 = 1;
  }
  if ((iVar1 == 0x550) && (iVar2 == 0x300)) {
    uVar3 = 1;
  }
  if ((iVar1 == 0x500) && (iVar2 == 0x300)) {
    uVar3 = 1;
  }
  if ((iVar1 == 0x5a0) && (iVar2 == 900)) {
    uVar3 = 1;
  }
  if ((iVar1 == 0x640) && (iVar2 == 900)) {
    uVar3 = 1;
  }
  if ((iVar1 == 0x690) && (iVar2 == 0x41a)) {
    uVar3 = 1;
  }
  if ((iVar1 == 0x780) && (iVar2 == 0x4b0)) {
    uVar3 = 1;
  }
  return uVar3;
}

