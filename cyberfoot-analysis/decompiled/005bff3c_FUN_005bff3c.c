// Address: 005bff3c
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

/* WARNING: Type propagation algorithm not settling */

undefined4 FUN_005bff3c(void)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 *puVar3;
  byte bVar4;
  int in_stack_00000004;
  undefined4 *in_stack_00000008;
  undefined4 *in_stack_0000000c;
  undefined4 *in_stack_00000010;
  LPRECT in_stack_00000014;
  int in_stack_00000018;
  undefined4 auStackY_17f0 [1519];
  undefined4 local_14;
  
  bVar4 = 0;
  if (in_stack_00000008 != (undefined4 *)0x0) {
    *in_stack_00000008 = 0;
  }
  if (in_stack_0000000c != (undefined4 *)0x0) {
    *in_stack_0000000c = 0;
  }
  iVar2 = in_stack_00000004;
  if (in_stack_00000004 != 0) {
    iVar2 = in_stack_00000004 + 600;
  }
  FUN_00406898(in_stack_00000008,iVar2);
  FUN_00406880(in_stack_0000000c);
  FUN_00465ba8(in_stack_00000004,&stack0xffffffec);
  puVar3 = in_stack_00000010 + (uint)bVar4 * -2 + 1;
  *in_stack_00000010 = local_14;
  *puVar3 = *(undefined4 *)((int)&stack0xfffffff0 + (uint)bVar4 * 0xfffffffe * 4);
  puVar3[(uint)bVar4 * -2 + 1] =
       *(undefined4 *)(&stack0xfffffff4 + (uint)bVar4 * -8 + (uint)bVar4 * -8);
  (puVar3 + (uint)bVar4 * -2 + 1)[(uint)bVar4 * -2 + 1] =
       *(undefined4 *)
        ((int)(&stack0xfffffff4 + (uint)bVar4 * -8 + (uint)bVar4 * -8) + ((uint)bVar4 * -2 + 1) * 4)
  ;
  SetRect(in_stack_00000014,0,0,0x7fff,0x7fff);
  *(undefined4 *)(in_stack_00000018 + 4) = 0;
  uVar1 = thunk_FUN_0046c8f8(in_stack_00000004);
  *(undefined4 *)(in_stack_00000018 + 8) = uVar1;
  *(undefined4 *)(in_stack_00000018 + 0xc) = 0;
  *(undefined4 *)(in_stack_00000018 + 0x10) = 0;
  return 0;
}

