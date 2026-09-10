// Address: 004c37f0
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void FUN_004c37f0(void)

{
  short sVar1;
  ushort uVar2;
  int iVar3;
  char *pcVar4;
  char *pcVar5;
  undefined4 extraout_ECX;
  char cVar6;
  undefined3 uVar7;
  undefined4 *in_stack_00000004;
  byte in_stack_00000008;
  undefined4 in_stack_0000000c;
  undefined4 *puVar8;
  
  sVar1 = FUN_00404ba4(in_stack_0000000c);
  iVar3 = FUN_00404da4(in_stack_0000000c);
  pcVar4 = (char *)(iVar3 + sVar1 + -1);
  FUN_00404f30(in_stack_00000004,sVar1 + 1);
  iVar3 = FUN_00404da4(*in_stack_00000004);
  pcVar5 = (char *)(iVar3 + sVar1);
  iVar3 = (uint)(ushort)(sVar1 >> 0xf) << 0x10;
  for (; uVar7 = (undefined3)((uint)iVar3 >> 8), sVar1 != 0; sVar1 = sVar1 + -1) {
    cVar6 = *pcVar4;
    pcVar4 = pcVar4 + -1;
    uVar2 = (ushort)(byte)(cVar6 - 0x30) * (ushort)in_stack_00000008 + (short)iVar3;
    iVar3 = CONCAT31(uVar7,(char)(uVar2 / 10));
    *pcVar5 = (char)(uVar2 % 10) + '0';
    pcVar5 = pcVar5 + -1;
  }
  cVar6 = (char)iVar3 + '0';
  *pcVar5 = cVar6;
  if (*(char *)*in_stack_00000004 == '0') {
    puVar8 = in_stack_00000004;
    iVar3 = FUN_00404ba4(*in_stack_00000004,CONCAT31(uVar7,cVar6),extraout_ECX,in_stack_00000004);
    FUN_00404e04(*in_stack_00000004,2,iVar3 + -1,puVar8);
  }
  return;
}

