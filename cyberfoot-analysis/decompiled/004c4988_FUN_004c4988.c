// Address: 004c4988
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

undefined4 FUN_004c4988(void)

{
  byte bVar1;
  byte bVar2;
  byte bVar3;
  short sVar4;
  byte bVar5;
  short in_stack_00000004;
  short in_stack_00000008;
  byte *in_stack_0000000c;
  byte *in_stack_00000010;
  
  do {
    sVar4 = in_stack_00000004;
    if (in_stack_00000008 == 0) {
LAB_004c4a02:
      do {
        if (sVar4 < 1) {
          return 0;
        }
        bVar1 = *in_stack_0000000c;
        in_stack_0000000c = in_stack_0000000c + 1;
        sVar4 = sVar4 + -2;
      } while (bVar1 == 0);
      return 0xffffffff;
    }
    bVar1 = *in_stack_00000010;
    bVar2 = *in_stack_0000000c;
    in_stack_0000000c = in_stack_0000000c + 1;
    if (bVar1 != bVar2) {
      bVar3 = bVar1 >> 4;
      bVar5 = bVar2 >> 4;
      if (bVar5 == bVar3) {
        if (in_stack_00000008 == 0) goto LAB_004c4a02;
        bVar3 = bVar1 & 0xf;
        bVar5 = bVar2 & 0xf;
      }
      if (bVar5 <= bVar3) {
        return 1;
      }
      return 0xffffffff;
    }
    sVar4 = in_stack_00000004 + -1;
    if (in_stack_00000008 == 1) goto LAB_004c4a02;
    in_stack_00000008 = in_stack_00000008 + -2;
    in_stack_00000004 = in_stack_00000004 + -2;
    in_stack_00000010 = in_stack_00000010 + 1;
  } while( true );
}

