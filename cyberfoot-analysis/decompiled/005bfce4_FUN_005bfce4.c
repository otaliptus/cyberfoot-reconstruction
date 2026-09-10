// Address: 005bfce4
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

int FUN_005bfce4(void)

{
  int iVar1;
  int iVar2;
  int *in_stack_00000004;
  int *piVar3;
  undefined4 uVar4;
  int *piVar5;
  int local_10;
  int local_c;
  int local_8;
  
  piVar5 = &local_10;
  uVar4 = 1;
  piVar3 = (int *)in_stack_00000004[0x86];
  local_8 = (**(code **)(*piVar3 + 0x48))();
  if (local_8 == 0) {
    iVar1 = MulDiv(local_10,*(int *)(*(int *)PTR_DAT_0066b760 + 0x40),0x9ec);
    iVar2 = MulDiv(local_c,*(int *)(*(int *)PTR_DAT_0066b760 + 0x40),0x9ec);
    if (((*(byte *)((int)in_stack_00000004 + 0x23d) & 4) != 0) && (in_stack_00000004[0x88] == 0)) {
      if (0x20 < iVar1) {
        iVar1 = 0x20;
      }
      if (0x20 < iVar2) {
        iVar2 = 0x20;
      }
    }
    (**(code **)(*in_stack_00000004 + 0x84))
              (in_stack_00000004,in_stack_00000004[0x10],in_stack_00000004[0x11],iVar2,iVar1,piVar3,
               uVar4,piVar5);
  }
  return local_8;
}

