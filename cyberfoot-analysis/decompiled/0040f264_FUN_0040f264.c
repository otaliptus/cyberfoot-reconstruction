// Address: 0040f264
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void FUN_0040f264(void)

{
  byte bVar1;
  byte *pbVar2;
  UINT CodePage;
  char cVar3;
  int iVar4;
  LPCPINFO lpCPInfo;
  int in_stack_00000004;
  byte local_5;
  
  lpCPInfo = (LPCPINFO)(in_stack_00000004 + -0x14);
  CodePage = FUN_0040f1f0(DAT_0066c744);
  GetCPInfo(CodePage,lpCPInfo);
  for (iVar4 = 0;
      (iVar4 < 0xc &&
      (*(char *)(in_stack_00000004 + -0xe + iVar4) != '\0' ||
       *(char *)(in_stack_00000004 + -0xd + iVar4) != '\0')); iVar4 = iVar4 + 2) {
    local_5 = *(byte *)(in_stack_00000004 + -0xe + iVar4);
    bVar1 = *(byte *)(in_stack_00000004 + -0xd + iVar4);
    if (local_5 <= bVar1) {
      cVar3 = (bVar1 - local_5) + '\x01';
      do {
        pbVar2 = (byte *)((int)&DAT_00662134 + ((int)(uint)local_5 >> 3));
        *pbVar2 = *pbVar2 | '\x01' << (local_5 & 7);
        local_5 = local_5 + 1;
        cVar3 = cVar3 + -1;
      } while (cVar3 != '\0');
    }
  }
  return;
}

