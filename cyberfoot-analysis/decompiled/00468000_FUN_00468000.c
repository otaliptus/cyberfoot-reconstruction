// Address: 00468000
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void FUN_00468000(void)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  int in_stack_00000004;
  undefined1 local_24 [16];
  undefined1 local_14 [8];
  int local_c;
  int local_8;
  
  piVar3 = (int *)(in_stack_00000004 + -4);
  FUN_0041c968(*(undefined4 *)(*piVar3 + 0x40),*(undefined4 *)(*piVar3 + 0x44),local_14);
  FUN_00465d20(*(undefined4 *)(*piVar3 + 0x30),local_14,&local_c);
  iVar1 = *(int *)(*(int *)(in_stack_00000004 + -8) + 8);
  iVar2 = *(int *)(*piVar3 + 0x30);
  FUN_0041c9b8((*(int *)(iVar2 + 0x40) + *(int *)(iVar1 + 0x44)) - local_c,
               (*(int *)(iVar2 + 0x44) + *(int *)(iVar1 + 0x48)) - local_8,
               ((*(int *)(iVar1 + 0x4c) - *(int *)(iVar1 + 0x44)) + *(int *)(iVar2 + 0x48)) -
               *(int *)(*piVar3 + 0x48),local_24,
               ((*(int *)(iVar1 + 0x50) - *(int *)(iVar1 + 0x48)) + *(int *)(iVar2 + 0x4c)) -
               *(int *)(*piVar3 + 0x4c));
  FUN_00465bc8(iVar2,local_24);
  return;
}

