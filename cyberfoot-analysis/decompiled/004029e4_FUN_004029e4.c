// Address: 004029e4
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

undefined4 FUN_004029e4(void)

{
  undefined4 uVar1;
  int iVar2;
  
  iVar2 = FUN_00406fb0();
  uVar1 = *(undefined4 *)(iVar2 + 4);
  iVar2 = FUN_00406fb0();
  *(undefined4 *)(iVar2 + 4) = 0;
  return uVar1;
}

