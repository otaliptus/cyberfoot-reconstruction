// Address: 00653074
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

undefined4 FUN_00653074(void)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  
  uVar3 = 0;
  iVar1 = GetSystemMetrics(0);
  iVar2 = GetSystemMetrics(1);
  if ((iVar1 == 0x280) && (iVar2 == 0x1e0)) {
    uVar3 = 1;
  }
  if ((iVar1 == 800) && (iVar2 == 600)) {
    uVar3 = 0;
  }
  if ((iVar1 == 0x300) && (iVar2 == 0x240)) {
    uVar3 = 1;
  }
  if ((iVar1 == 0x400) && (iVar2 == 0x300)) {
    uVar3 = 1;
  }
  if ((iVar1 == 0x460) && (iVar2 == 0x348)) {
    uVar3 = 1;
  }
  if ((iVar1 == 0x480) && (iVar2 == 0x360)) {
    uVar3 = 1;
  }
  if ((iVar1 == 0x500) && (iVar2 == 0x3c0)) {
    uVar3 = 1;
  }
  if ((iVar1 == 0x578) && (iVar2 == 0x41a)) {
    uVar3 = 1;
  }
  if ((iVar1 == 0x640) && (iVar2 == 0x4b0)) {
    uVar3 = 1;
  }
  if ((iVar1 == 0x800) && (iVar2 == 0x600)) {
    uVar3 = 1;
  }
  if ((iVar1 == 0x500) && (iVar2 == 0x400)) {
    uVar3 = 1;
  }
  return uVar3;
}

