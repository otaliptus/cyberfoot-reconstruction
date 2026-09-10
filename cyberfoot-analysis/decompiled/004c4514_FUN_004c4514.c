// Address: 004c4514
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void FUN_004c4514(void)

{
  char cVar1;
  char cVar2;
  byte bVar3;
  int iVar4;
  uint uVar7;
  byte bVar8;
  byte *pbVar9;
  ushort in_stack_00000004;
  char *in_stack_00000008;
  byte *in_stack_0000000c;
  int iVar5;
  undefined3 uVar6;
  
  cVar2 = *PTR_DAT_0066b70c;
  uVar7 = (uint)in_stack_00000004;
  bVar8 = 0;
  iVar5 = CONCAT31((int3)((uint)PTR_DAT_0066b70c >> 8),cVar2);
  do {
    cVar1 = *in_stack_00000008;
    uVar6 = (undefined3)((uint)iVar5 >> 8);
    iVar4 = CONCAT31(uVar6,cVar1);
    pbVar9 = in_stack_0000000c;
    if (cVar1 != cVar2) {
      if (bVar8 == 0) {
        iVar4 = (uint)(byte)(cVar1 << 4) << 8;
      }
      else {
        bVar3 = cVar1 - 0x30U | (byte)((uint)iVar5 >> 8);
        iVar4 = CONCAT31(uVar6,bVar3);
        pbVar9 = in_stack_0000000c + 1;
        *in_stack_0000000c = bVar3;
      }
      bVar8 = ~bVar8;
    }
    uVar7 = uVar7 - 1;
    iVar5 = iVar4;
    in_stack_00000008 = in_stack_00000008 + 1;
    in_stack_0000000c = pbVar9;
  } while (uVar7 != 0);
  if (bVar8 != 0) {
    *pbVar9 = (byte)((uint)iVar4 >> 8);
  }
  return;
}

