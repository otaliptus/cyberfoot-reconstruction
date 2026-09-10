// Address: 004a925c
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void FUN_004a925c(int param_1,byte param_2,int param_3,undefined4 param_4,byte *param_5)

{
  int iVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  
  FUN_004032a8(param_5,*(undefined4 *)(param_1 + 0x20),0);
  iVar3 = (&DAT_00669384)[param_2];
  iVar1 = *(int *)(param_1 + 0x14);
  do {
    iVar5 = *(int *)(&DAT_00669438 + (uint)*(ushort *)(iVar1 + 0x2f) * 4);
    do {
      iVar2 = (uint)*(ushort *)(iVar1 + 0x2f) * iVar3;
      if (iVar2 < 0) {
        iVar2 = iVar2 + 7;
      }
      uVar4 = (uint)*(ushort *)(iVar1 + 0x2f) * iVar3 & 0x80000007;
      if ((int)uVar4 < 0) {
        uVar4 = (uVar4 - 1 | 0xfffffff8) + 1;
      }
      *param_5 = *param_5 |
                 (*(byte *)((iVar2 >> 3) + param_3) >>
                  ((char)*(undefined4 *)
                          (&DAT_00669438 + (uint)*(byte *)(*(int *)(param_1 + 0x14) + 0x460) * 4) -
                   (char)uVar4 & 0x1fU) & (&DAT_00669418)[(uint)*(ushort *)(iVar1 + 0x2f) * 4]) <<
                 ((byte)iVar5 & 0x1f);
      iVar3 = iVar3 + (&DAT_006693bc)[param_2];
      iVar5 = iVar5 - (uint)*(ushort *)(iVar1 + 0x2f);
    } while (-1 < iVar5);
    param_5 = param_5 + 1;
  } while (iVar3 < *(int *)(param_1 + 0x18));
  return;
}

