// Address: 0054eaa0
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void FUN_0054eaa0(int param_1,undefined4 param_2)

{
  int iVar1;
  undefined4 uVar2;
  undefined1 *puVar3;
  undefined1 local_1c [16];
  
  puVar3 = local_1c;
  iVar1 = FUN_00430280(param_2);
  *(undefined4 *)(iVar1 + 0x20) = 0x42;
  FUN_0041c990(0,0,*(undefined4 *)(param_1 + 0x48),local_1c,*(undefined4 *)(param_1 + 0x4c));
  uVar2 = FUN_00430280(param_2);
  FUN_0042addc(iVar1,local_1c,uVar2,puVar3);
  *(undefined4 *)(iVar1 + 0x20) = 0xcc0020;
  return;
}

