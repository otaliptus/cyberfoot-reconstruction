// Address: 0041a7f8
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0041a7f8(int *param_1,undefined4 *param_2,undefined4 param_3,float param_4,float param_5,
                 undefined2 param_6)

{
  byte bVar1;
  int iVar2;
  byte *pbVar3;
  int extraout_ECX;
  int iVar4;
  double *pdVar5;
  code *local_c;
  
  local_c = (code *)param_2[2];
  pbVar3 = (byte *)FUN_00419c28(*(undefined4 *)*param_2);
  bVar1 = *pbVar3;
  if (((uint)local_c & 0xff000000) == 0xff000000) {
    pdVar5 = (double *)(((uint)local_c & 0xffffff) + (int)param_1);
    switch(bVar1 & 0x7f) {
    case 0:
      *(float *)pdVar5 = (float)(float10)CONCAT28(param_6,CONCAT44(param_5,param_4));
      break;
    case 1:
      *pdVar5 = (double)(float10)CONCAT28(param_6,CONCAT44(param_5,param_4));
      break;
    case 2:
      *(float *)pdVar5 = param_4;
      *(float *)((int)pdVar5 + 4) = param_5;
      *(undefined2 *)(pdVar5 + 1) = param_6;
      break;
    case 3:
      *pdVar5 = (double)(longlong)ROUND((float10)CONCAT28(param_6,CONCAT44(param_5,param_4)));
      break;
    case 4:
      *pdVar5 = (double)(longlong)
                        ROUND((float10)CONCAT28(param_6,CONCAT44(param_5,param_4)) *
                              (float10)_DAT_0041a9ec);
    }
  }
  else {
    iVar4 = extraout_ECX;
    if (((uint)local_c & 0xff000000) == 0xfe000000) {
      iVar4 = (int)(short)local_c;
      local_c = *(code **)(*param_1 + iVar4);
    }
    iVar2 = param_2[4];
    if (iVar2 == -0x80000000) {
      switch(bVar1 & 0x7f) {
      case 0:
        (*local_c)(param_1);
        break;
      case 1:
        (*local_c)(param_1,0x80000000,iVar4,
                   (double)(float10)CONCAT28(param_6,CONCAT44(param_5,param_4)));
        break;
      case 2:
        (*local_c)(param_1,0x80000000,iVar4,param_4,param_5,param_6);
        break;
      case 3:
        (*local_c)(param_1,0x80000000,iVar4,
                   (longlong)ROUND((float10)CONCAT28(param_6,CONCAT44(param_5,param_4))));
        break;
      case 4:
        (*local_c)(param_1,0x80000000,iVar4,
                   (longlong)
                   ROUND((float10)CONCAT28(param_6,CONCAT44(param_5,param_4)) *
                         (float10)_DAT_0041a9ec));
      }
    }
    else {
      switch(bVar1 & 0x7f) {
      case 0:
        (*local_c)(param_1);
        break;
      case 1:
        (*local_c)(param_1,iVar2,iVar4,(double)(float10)CONCAT28(param_6,CONCAT44(param_5,param_4)))
        ;
        break;
      case 2:
        (*local_c)(param_1,iVar2,iVar4,param_4,param_5,param_6);
        break;
      case 3:
        (*local_c)(param_1,iVar2,iVar4,
                   (longlong)ROUND((float10)CONCAT28(param_6,CONCAT44(param_5,param_4))));
        break;
      case 4:
        (*local_c)(param_1,iVar2,iVar4,
                   (longlong)
                   ROUND((float10)CONCAT28(param_6,CONCAT44(param_5,param_4)) *
                         (float10)_DAT_0041a9ec));
      }
    }
  }
  return;
}

