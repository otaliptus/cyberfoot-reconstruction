// Address: 004ad224
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void FUN_004ad224(void)

{
  int in_stack_00000004;
  short *in_stack_00000008;
  int in_stack_0000000c;
  undefined4 in_stack_00000010;
  undefined1 local_108 [256];
  undefined4 local_8;
  
  if (0x40 < *(byte *)(in_stack_0000000c + 1)) {
    FUN_0040e42c(PTR_DAT_004ac464,1,PTR_PTR_0066b01c);
    in_stack_00000008 = (short *)FUN_00404250();
  }
  if (*in_stack_00000008 == 9) {
    local_8 = *(undefined4 *)(in_stack_00000008 + 4);
  }
  else if (*in_stack_00000008 == 0x4009) {
    local_8 = **(undefined4 **)(in_stack_00000008 + 4);
  }
  else {
    FUN_004ad20c();
  }
  FUN_004ad12c(local_8,in_stack_0000000c + 3 + (uint)*(byte *)(in_stack_0000000c + 1),
               *(byte *)(in_stack_0000000c + 2) + 1,local_108);
  if (in_stack_00000004 != 0) {
    FUN_00411d38(in_stack_00000004);
  }
  FUN_004acdb4(local_8,in_stack_0000000c,local_108,in_stack_00000004,in_stack_00000010);
  return;
}

