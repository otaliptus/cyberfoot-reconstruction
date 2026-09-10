// Address: 004c3b28
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

/* WARNING: Restarted to delay deadcode elimination for space: stack */

undefined4 FUN_004c3b28(void)

{
  char cVar1;
  bool bVar2;
  bool bVar3;
  byte bVar4;
  byte bVar5;
  byte in_stack_00000004;
  char *in_stack_00000008;
  char *in_stack_0000000c;
  
  bVar4 = 0;
  bVar3 = false;
  bVar5 = 0;
  bVar2 = false;
  while( true ) {
    while( true ) {
      cVar1 = *in_stack_0000000c;
      in_stack_0000000c = in_stack_0000000c + 1;
      if (!bVar2) {
        bVar5 = bVar5 + cVar1;
        bVar2 = true;
      }
      if (cVar1 == '\0') break;
      if (cVar1 != *PTR_DAT_0066b70c) {
        bVar4 = bVar4 + 1;
      }
    }
    if (bVar3) break;
    bVar3 = true;
    bVar2 = false;
    in_stack_0000000c = in_stack_00000008;
  }
  if (bVar5 < 0x6c) {
    in_stack_00000004 = in_stack_00000004 + 1;
  }
  return CONCAT31((int3)((uint)PTR_DAT_0066b70c >> 8),bVar4 <= in_stack_00000004);
}

