// Address: 00647b80
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

undefined4 FUN_00647b80(void)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  
  iVar1 = GetSystemMetrics(0);
  iVar2 = GetSystemMetrics(1);
  if ((iVar1 == 0x280) && (iVar2 == 0x1e0)) {
    return 0;
  }
  if ((iVar1 == 800) && (iVar2 == 600)) {
    uVar3 = 1;
  }
  else if ((iVar1 == 0x400) && (iVar2 == 0x300)) {
    uVar3 = 2;
  }
  else if ((iVar1 == 0x480) && (iVar2 == 0x360)) {
    uVar3 = 3;
  }
  else if ((iVar1 == 0x500) && (iVar2 == 0x2d0)) {
    uVar3 = 4;
  }
  else if ((iVar1 == 0x500) && (iVar2 == 0x3c0)) {
    uVar3 = 5;
  }
  else if ((iVar1 == 0x500) && (iVar2 == 0x400)) {
    uVar3 = 6;
  }
  else if ((iVar1 == 0x780) && (iVar2 == 0x438)) {
    uVar3 = 6;
  }
  else {
    uVar3 = 7;
  }
  return uVar3;
}

