// Address: 0045b988
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void FUN_0045b988(int *param_1)

{
  char cVar1;
  int iVar2;
  int *piVar3;
  uint uVar4;
  byte bVar5;
  int aiStackY_1818 [1524];
  tagRECT tStack_3c;
  LONG LStack_2c;
  int aiStack_28 [3];
  undefined1 local_1c [16];
  
  bVar5 = 0;
  iVar2 = param_1[0x58];
  cVar1 = FUN_0045bba8(param_1);
  if (cVar1 == '\0') {
    FUN_0042ab6c(*(undefined4 *)(iVar2 + 0x14),param_1[0x1c]);
    FUN_0042ac88(*(undefined4 *)(iVar2 + 0x14),0);
    (**(code **)(*param_1 + 0x44))(param_1,local_1c);
    FUN_0042af8c(iVar2,local_1c);
  }
  FUN_0042ac88(*(undefined4 *)(iVar2 + 0x14),1);
  (**(code **)(*param_1 + 0x44))(param_1,&tStack_3c);
  uVar4 = (uint)(ushort)(*(ushort *)(&DAT_00662ea8 + (uint)*(byte *)((int)param_1 + 0x16f) * 2) |
                         0x40 | *(ushort *)(&DAT_00662ea0 + (uint)*(byte *)(param_1 + 0x5b) * 2));
  if (*(char *)((int)param_1 + 0x16e) != '\0') {
    LStack_2c = tStack_3c.left;
    piVar3 = (int *)((int)&tStack_3c + (uint)bVar5 * -8 + (uint)bVar5 * -8 + 8);
    aiStack_28[(uint)bVar5 * -2] = *(int *)((int)&tStack_3c + (uint)bVar5 * -8 + 4);
    aiStack_28[(uint)bVar5 * -2 + (uint)bVar5 * -2 + 1] = *piVar3;
    (aiStack_28 + (uint)bVar5 * -2 + (uint)bVar5 * -2 + 1)[(uint)bVar5 * -2 + 1] =
         piVar3[(uint)bVar5 * -2 + 1];
    FUN_00403c80(param_1,&LStack_2c,uVar4 | 0x400);
    if (*(char *)((int)param_1 + 0x16e) == '\x02') {
      OffsetRect(&tStack_3c,0,param_1[0x13] - aiStack_28[2]);
    }
    else {
      iVar2 = param_1[0x13] - aiStack_28[2] >> 1;
      if (iVar2 < 0) {
        iVar2 = iVar2 + (uint)((param_1[0x13] - aiStack_28[2] & 1U) != 0);
      }
      OffsetRect(&tStack_3c,0,iVar2);
    }
  }
  FUN_00403c80(param_1,&tStack_3c,uVar4);
  return;
}

