// Address: 0064e824
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0064e824(int param_1,int param_2,int param_3,int param_4,undefined4 param_5,
                 undefined4 param_6)

{
  int *piVar1;
  undefined *puVar2;
  undefined1 *puVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  undefined4 uVar7;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_12c;
  undefined1 *puStack_128;
  undefined1 *puStack_124;
  undefined4 local_110;
  undefined1 local_10c [256];
  int local_c;
  int local_8;
  
  local_110 = 0;
  puStack_124 = (undefined1 *)0x64e848;
  local_c = param_2;
  local_8 = param_1;
  FUN_00404d94(param_4);
  puVar2 = PTR_DAT_0066b5b8;
  puStack_128 = &LAB_0064f2b7;
  uStack_12c = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_12c;
  if ((*(int *)(*(int *)PTR_DAT_0066af70 + 0x2ec + local_8 * 0x2f8) < *(int *)PTR_DAT_0066aee0) ||
     (puStack_124 = &stack0xfffffffc, param_3 != -1)) {
    puStack_124 = &stack0xfffffffc;
    if (param_3 == -1) {
      puStack_124 = &stack0xfffffffc;
      iVar5 = FUN_00405eec(*(undefined4 *)puVar2);
      FUN_004060a8(puVar2,PTR_DAT_00488b00,1,iVar5 + 1);
      param_3 = FUN_00405ef4(*(undefined4 *)puVar2);
    }
    *(undefined1 *)(*(int *)puVar2 + 0x120 + param_3 * 0x130) = 1;
    *(int *)(*(int *)puVar2 + 0x20 + param_3 * 0x130) = local_8;
    if (*(int *)(*(int *)PTR_DAT_0066af70 + 0x98 + local_8 * 0x2f8) < 0x13) {
      if (*(int *)(*(int *)PTR_DAT_0066af70 + 0x98 + local_8 * 0x2f8) < 0xf) {
        iVar5 = FUN_004032c8(100);
        if ((int)(iVar5 + 1U) < 0x53) {
          if (iVar5 + 1U < 0x24) {
            *(undefined4 *)(*(int *)puVar2 + 0x30 + param_3 * 0x130) = 6;
          }
          else if (iVar5 - 0x23U < 0x14) {
            *(undefined4 *)(*(int *)puVar2 + 0x30 + param_3 * 0x130) = 5;
          }
          else if (iVar5 - 0x37U < 0x14) {
            *(undefined4 *)(*(int *)puVar2 + 0x30 + param_3 * 0x130) = 7;
          }
          else if (iVar5 - 0x4bU < 7) {
            *(undefined4 *)(*(int *)puVar2 + 0x30 + param_3 * 0x130) = 8;
          }
        }
        else {
          switch(iVar5) {
          case 0x52:
          case 0x53:
            *(undefined4 *)(*(int *)puVar2 + 0x30 + param_3 * 0x130) = 9;
            break;
          case 0x54:
          case 0x55:
          case 0x56:
            *(undefined4 *)(*(int *)puVar2 + 0x30 + param_3 * 0x130) = 4;
            break;
          case 0x57:
          case 0x58:
          case 0x59:
          case 0x5a:
          case 0x5b:
          case 0x5c:
            *(undefined4 *)(*(int *)puVar2 + 0x30 + param_3 * 0x130) = 3;
            break;
          case 0x5d:
          case 0x5e:
          case 0x5f:
          case 0x60:
            *(undefined4 *)(*(int *)puVar2 + 0x30 + param_3 * 0x130) = 2;
            break;
          case 0x61:
          case 0x62:
          case 99:
          case 100:
            *(undefined4 *)(*(int *)puVar2 + 0x30 + param_3 * 0x130) = 1;
          }
        }
      }
      else {
        iVar5 = FUN_004032c8(100);
        uVar6 = iVar5 + 1;
        if ((int)uVar6 < 0x50) {
          if ((int)uVar6 < 0x33) {
            if (uVar6 < 0x1f) {
              *(undefined4 *)(*(int *)puVar2 + 0x30 + param_3 * 0x130) = 6;
            }
            else if (iVar5 - 0x1eU < 0x14) {
              *(undefined4 *)(*(int *)puVar2 + 0x30 + param_3 * 0x130) = 5;
            }
          }
          else if (iVar5 - 0x32U < 0x14) {
            *(undefined4 *)(*(int *)puVar2 + 0x30 + param_3 * 0x130) = 7;
          }
          else if (iVar5 - 0x46U < 5) {
            *(undefined4 *)(*(int *)puVar2 + 0x30 + param_3 * 0x130) = 8;
          }
          else if (iVar5 - 0x4bU < 4) {
            *(undefined4 *)(*(int *)puVar2 + 0x30 + param_3 * 0x130) = 9;
          }
        }
        else if ((int)uVar6 < 0x58) {
          if (iVar5 - 0x4fU < 2) {
            *(undefined4 *)(*(int *)puVar2 + 0x30 + param_3 * 0x130) = 10;
          }
          else if (iVar5 - 0x51U < 6) {
            *(undefined4 *)(*(int *)puVar2 + 0x30 + param_3 * 0x130) = 4;
          }
        }
        else if (iVar5 - 0x57U < 6) {
          *(undefined4 *)(*(int *)puVar2 + 0x30 + param_3 * 0x130) = 3;
        }
        else if (iVar5 - 0x5dU < 4) {
          *(undefined4 *)(*(int *)puVar2 + 0x30 + param_3 * 0x130) = 2;
        }
        else if (iVar5 - 0x61U < 4) {
          *(undefined4 *)(*(int *)puVar2 + 0x30 + param_3 * 0x130) = 1;
        }
      }
    }
    else {
      iVar5 = FUN_004032c8(100);
      uVar6 = iVar5 + 1;
      if ((int)uVar6 < 0x50) {
        if ((int)uVar6 < 0x2e) {
          if (uVar6 < 0x1f) {
            *(undefined4 *)(*(int *)puVar2 + 0x30 + param_3 * 0x130) = 6;
          }
          else if (iVar5 - 0x1eU < 0xf) {
            *(undefined4 *)(*(int *)puVar2 + 0x30 + param_3 * 0x130) = 5;
          }
        }
        else if (iVar5 - 0x2dU < 0x17) {
          *(undefined4 *)(*(int *)puVar2 + 0x30 + param_3 * 0x130) = 7;
        }
        else if (iVar5 - 0x44U < 7) {
          *(undefined4 *)(*(int *)puVar2 + 0x30 + param_3 * 0x130) = 8;
        }
        else if (iVar5 - 0x4bU < 4) {
          *(undefined4 *)(*(int *)puVar2 + 0x30 + param_3 * 0x130) = 9;
        }
      }
      else if ((int)uVar6 < 0x58) {
        if (iVar5 - 0x4fU < 3) {
          *(undefined4 *)(*(int *)puVar2 + 0x30 + param_3 * 0x130) = 10;
        }
        else if (iVar5 - 0x52U < 5) {
          *(undefined4 *)(*(int *)puVar2 + 0x30 + param_3 * 0x130) = 4;
        }
      }
      else if (iVar5 - 0x57U < 6) {
        *(undefined4 *)(*(int *)puVar2 + 0x30 + param_3 * 0x130) = 3;
      }
      else if (iVar5 - 0x5dU < 4) {
        *(undefined4 *)(*(int *)puVar2 + 0x30 + param_3 * 0x130) = 2;
      }
      else if (iVar5 - 0x61U < 4) {
        *(undefined4 *)(*(int *)puVar2 + 0x30 + param_3 * 0x130) = 1;
      }
    }
    iVar5 = FUN_004032c8(100);
    if (iVar5 == 1) {
      *(undefined1 *)(*(int *)puVar2 + 0x15 + param_3 * 0x130) = 1;
    }
    iVar5 = FUN_004032c8(4);
    *(int *)(*(int *)puVar2 + 0x18 + param_3 * 0x130) = iVar5 + 0x10;
    iVar5 = FUN_004032c8(100);
    if ((int)(iVar5 + 1U) < 0x1f) {
      if (iVar5 + 1U < 0xb) {
        *(undefined4 *)(*(int *)puVar2 + 0x24 + param_3 * 0x130) = 0;
      }
      else if (iVar5 - 10U < 0x14) {
        *(undefined4 *)(*(int *)puVar2 + 0x24 + param_3 * 0x130) = 1;
      }
    }
    else if (iVar5 - 0x1eU < 0x14) {
      *(undefined4 *)(*(int *)puVar2 + 0x24 + param_3 * 0x130) = 2;
    }
    else if (iVar5 - 0x32U < 0x1e) {
      *(undefined4 *)(*(int *)puVar2 + 0x24 + param_3 * 0x130) = 3;
    }
    else if (iVar5 - 0x50U < 0x15) {
      *(undefined4 *)(*(int *)puVar2 + 0x24 + param_3 * 0x130) = 4;
    }
    if (-1 < local_c) {
      *(int *)(*(int *)puVar2 + 0x24 + param_3 * 0x130) = local_c;
    }
    if (*(int *)(*(int *)puVar2 + 0x24 + param_3 * 0x130) == 0) {
      iVar5 = FUN_004032c8(3);
      if (iVar5 == 0) {
        *(undefined4 *)(*(int *)puVar2 + 0x5c + param_3 * 0x130) = 0;
        *(undefined4 *)(*(int *)puVar2 + 0x60 + param_3 * 0x130) = 2;
      }
      else if (iVar5 == 1) {
        *(undefined4 *)(*(int *)puVar2 + 0x5c + param_3 * 0x130) = 2;
        *(undefined4 *)(*(int *)puVar2 + 0x60 + param_3 * 0x130) = 3;
      }
      else if (iVar5 == 2) {
        *(undefined4 *)(*(int *)puVar2 + 0x5c + param_3 * 0x130) = 3;
        *(undefined4 *)(*(int *)puVar2 + 0x60 + param_3 * 0x130) = 0;
      }
    }
    if (*(int *)(*(int *)puVar2 + 0x24 + param_3 * 0x130) == 1) {
      iVar5 = FUN_004032c8(3);
      if (iVar5 == 0) {
        *(undefined4 *)(*(int *)puVar2 + 0x5c + param_3 * 0x130) = 6;
        *(undefined4 *)(*(int *)puVar2 + 0x60 + param_3 * 0x130) = 10;
      }
      else if (iVar5 == 1) {
        *(undefined4 *)(*(int *)puVar2 + 0x5c + param_3 * 0x130) = 6;
        *(undefined4 *)(*(int *)puVar2 + 0x60 + param_3 * 0x130) = 0xd;
      }
      else if (iVar5 == 2) {
        *(undefined4 *)(*(int *)puVar2 + 0x5c + param_3 * 0x130) = 10;
        *(undefined4 *)(*(int *)puVar2 + 0x60 + param_3 * 0x130) = 0xb;
      }
    }
    if (*(int *)(*(int *)puVar2 + 0x24 + param_3 * 0x130) == 2) {
      iVar5 = FUN_004032c8(3);
      if (iVar5 == 0) {
        *(undefined4 *)(*(int *)puVar2 + 0x5c + param_3 * 0x130) = 7;
        *(undefined4 *)(*(int *)puVar2 + 0x60 + param_3 * 0x130) = 10;
      }
      else if (iVar5 == 1) {
        *(undefined4 *)(*(int *)puVar2 + 0x5c + param_3 * 0x130) = 7;
        *(undefined4 *)(*(int *)puVar2 + 0x60 + param_3 * 0x130) = 0xc;
      }
      else if (iVar5 == 2) {
        *(undefined4 *)(*(int *)puVar2 + 0x5c + param_3 * 0x130) = 7;
        *(undefined4 *)(*(int *)puVar2 + 0x60 + param_3 * 0x130) = 5;
      }
    }
    if (*(int *)(*(int *)puVar2 + 0x24 + param_3 * 0x130) == 3) {
      iVar5 = FUN_004032c8(4);
      if (iVar5 == 0) {
        *(undefined4 *)(*(int *)puVar2 + 0x5c + param_3 * 0x130) = 7;
        *(undefined4 *)(*(int *)puVar2 + 0x60 + param_3 * 0x130) = 10;
      }
      else if (iVar5 == 1) {
        *(undefined4 *)(*(int *)puVar2 + 0x5c + param_3 * 0x130) = 7;
        *(undefined4 *)(*(int *)puVar2 + 0x60 + param_3 * 0x130) = 0xb;
      }
      else if (iVar5 == 2) {
        *(undefined4 *)(*(int *)puVar2 + 0x5c + param_3 * 0x130) = 4;
        *(undefined4 *)(*(int *)puVar2 + 0x60 + param_3 * 0x130) = 0xb;
      }
      else if (iVar5 == 3) {
        *(undefined4 *)(*(int *)puVar2 + 0x5c + param_3 * 0x130) = 4;
        *(undefined4 *)(*(int *)puVar2 + 0x60 + param_3 * 0x130) = 9;
      }
    }
    if (*(int *)(*(int *)puVar2 + 0x24 + param_3 * 0x130) == 4) {
      iVar5 = FUN_004032c8(3);
      if (iVar5 == 0) {
        *(undefined4 *)(*(int *)puVar2 + 0x5c + param_3 * 0x130) = 9;
        *(undefined4 *)(*(int *)puVar2 + 0x60 + param_3 * 0x130) = 5;
      }
      else if (iVar5 == 1) {
        *(undefined4 *)(*(int *)puVar2 + 0x5c + param_3 * 0x130) = 0xd;
        *(undefined4 *)(*(int *)puVar2 + 0x60 + param_3 * 0x130) = 9;
      }
      else if (iVar5 == 2) {
        *(undefined4 *)(*(int *)puVar2 + 0x5c + param_3 * 0x130) = 8;
        *(undefined4 *)(*(int *)puVar2 + 0x60 + param_3 * 0x130) = 9;
      }
    }
    *(undefined4 *)(*(int *)puVar2 + 0x1c + param_3 * 0x130) =
         *(undefined4 *)(*(int *)PTR_DAT_0066af70 + 0x3c + local_8 * 0x2f8);
    if (((*(int *)(*(int *)PTR_DAT_0066af70 + 0x3c + local_8 * 0x2f8) == 0x1d) &&
        (0x11 < *(int *)(*(int *)PTR_DAT_0066af70 + 0x98 + local_8 * 0x2f8))) &&
       (iVar5 = FUN_004032c8(0x50), iVar5 == 1)) {
      iVar5 = FUN_004032c8(3);
      if (iVar5 == 0) {
        *(undefined4 *)(*(int *)puVar2 + 0x1c + param_3 * 0x130) = 0xb;
      }
      else if (iVar5 == 1) {
        *(undefined4 *)(*(int *)puVar2 + 0x1c + param_3 * 0x130) = 0x2a;
      }
      else if (iVar5 == 2) {
        *(undefined4 *)(*(int *)puVar2 + 0x1c + param_3 * 0x130) = 0xc3;
      }
    }
    iVar4 = local_8;
    iVar5 = *(int *)(*(int *)PTR_DAT_0066af70 + 0x3c + local_8 * 0x2f8);
    if ((((iVar5 == 3) || (iVar5 == 0x9a)) ||
        ((iVar5 == 0x55 || ((iVar5 == 0x68 || (iVar5 == 0x48)))))) &&
       (iVar5 = FUN_004032c8(0x50), iVar5 == 1)) {
      uVar7 = FUN_004032c8(5);
      switch(uVar7) {
      case 0:
        *(undefined4 *)(*(int *)puVar2 + 0x1c + param_3 * 0x130) = 3;
        break;
      case 1:
        *(undefined4 *)(*(int *)puVar2 + 0x1c + param_3 * 0x130) = 0x9a;
        break;
      case 2:
        *(undefined4 *)(*(int *)puVar2 + 0x1c + param_3 * 0x130) = 0x55;
        break;
      case 3:
        *(undefined4 *)(*(int *)puVar2 + 0x1c + param_3 * 0x130) = 0x68;
        break;
      case 4:
        *(undefined4 *)(*(int *)puVar2 + 0x1c + param_3 * 0x130) = 0x48;
      }
    }
    iVar5 = FUN_0064f2d0(*(undefined4 *)(*(int *)PTR_DAT_0066af70 + 0x3c + iVar4 * 0x2f8));
    if (iVar5 == 0) {
      if (*(int *)(*(int *)PTR_DAT_0066af70 + 0x3c + iVar4 * 0x2f8) == 0x48) {
        iVar5 = FUN_004032c8(0x50);
        if (iVar5 == 1) {
          iVar5 = FUN_004032c8(3);
          if (iVar5 == 0) {
            *(undefined4 *)(*(int *)puVar2 + 0x1c + param_3 * 0x130) = 10;
          }
          else if (iVar5 == 1) {
            *(undefined4 *)(*(int *)puVar2 + 0x1c + param_3 * 0x130) = 0xa9;
          }
          else if (iVar5 == 2) {
            *(undefined4 *)(*(int *)puVar2 + 0x1c + param_3 * 0x130) = 0x81;
          }
        }
      }
      else {
        iVar5 = FUN_004032c8(0x50);
        if (iVar5 == 1) {
          iVar5 = FUN_004032c8(4);
          if (iVar5 == 0) {
            *(undefined4 *)(*(int *)puVar2 + 0x1c + param_3 * 0x130) = 0x32;
          }
          else if (iVar5 == 1) {
            *(undefined4 *)(*(int *)puVar2 + 0x1c + param_3 * 0x130) = 0x24;
          }
          else if (iVar5 == 2) {
            *(undefined4 *)(*(int *)puVar2 + 0x1c + param_3 * 0x130) = 0x8d;
          }
          else if (iVar5 == 3) {
            *(undefined4 *)(*(int *)puVar2 + 0x1c + param_3 * 0x130) = 0x4b;
          }
        }
      }
    }
    if (*(int *)(*(int *)puVar2 + 0x1c + param_3 * 0x130) !=
        *(int *)(*(int *)PTR_DAT_0066af70 + 0x3c +
                *(int *)(*(int *)puVar2 + 0x20 + param_3 * 0x130) * 0x2f8)) {
      iVar5 = FUN_004032c8(4);
      *(int *)(*(int *)puVar2 + 0x30 + param_3 * 0x130) = iVar5 + 7;
    }
    uVar7 = FUN_00652868(param_3);
    *(undefined4 *)(*(int *)puVar2 + 0x128 + param_3 * 0x130) = uVar7;
    *(undefined4 *)(*(int *)puVar2 + 300 + param_3 * 0x130) = 0;
    uVar7 = FUN_006527f4(param_3);
    *(undefined4 *)(*(int *)puVar2 + 0x124 + param_3 * 0x130) = uVar7;
    iVar5 = FUN_004032c8(0xc);
    *(int *)(*(int *)puVar2 + 0x28 + param_3 * 0x130) =
         iVar5 + 10 + *(int *)(*(int *)puVar2 + 0x30 + param_3 * 0x130);
    if (param_4 == 0) {
      FUN_0064dfd4(*(undefined4 *)(*(int *)puVar2 + 0x20 + param_3 * 0x130),param_3,&local_110);
      FUN_00404b80(local_10c,local_110,0xff);
      FUN_004030e0(*(int *)puVar2 + param_3 * 0x130,local_10c,0x14);
    }
    else {
      FUN_00404b80(local_10c,param_4,0xff);
      FUN_004030e0(*(int *)puVar2 + param_3 * 0x130,local_10c,0x14);
    }
    uVar7 = FUN_004032c8(2);
    *(undefined4 *)(*(int *)puVar2 + 0x2c + param_3 * 0x130) = uVar7;
    *(undefined4 *)(*(int *)puVar2 + 0x50 + param_3 * 0x130) = 0;
    uVar7 = FUN_0065173c(param_3);
    *(undefined4 *)(*(int *)puVar2 + 0x58 + param_3 * 0x130) = uVar7;
    *(undefined4 *)(*(int *)puVar2 + 0x78 + param_3 * 0x130) = 100;
    *(undefined4 *)(*(int *)puVar2 + 0xe4 + param_3 * 0x130) = 3;
    iVar5 = FUN_00652134(param_3);
    *(longlong *)(*(int *)puVar2 + 0x40 + param_3 * 0x130) =
         (longlong)ROUND((float)iVar5 * _DAT_0064f2c8);
    iVar5 = FUN_00652590(param_3);
    *(longlong *)(*(int *)puVar2 + 0x38 + param_3 * 0x130) =
         (longlong)ROUND((float)iVar5 * _DAT_0064f2c8);
    *(undefined4 *)(*(int *)puVar2 + 0xe4 + param_3 * 0x130) = 3;
    *(undefined4 *)(*(int *)puVar2 + 0x54 + param_3 * 0x130) = 0;
    *(undefined1 *)(*(int *)puVar2 + 0x7d + param_3 * 0x130) = 0;
    if (((float10)CONCAT44(param_6,param_5) <
         (float10)*(longlong *)(*(int *)puVar2 + 0x40 + param_3 * 0x130)) &&
       (_DAT_0064f2cc < (float)CONCAT44(param_6,param_5))) {
      iVar5 = *(int *)puVar2;
      *(undefined4 *)(iVar5 + 0x40 + param_3 * 0x130) = param_5;
      *(undefined4 *)(iVar5 + 0x44 + param_3 * 0x130) = param_6;
    }
    FUN_00647c48(4,param_3);
    piVar1 = (int *)(*(int *)PTR_DAT_0066af70 + 0x2ec +
                    *(int *)(*(int *)puVar2 + 0x20 + param_3 * 0x130) * 0x2f8);
    *piVar1 = *piVar1 + 1;
  }
  puVar3 = puStack_124;
  *in_FS_OFFSET = uStack_12c;
  puStack_124 = &LAB_0064f2be;
  puStack_128 = (undefined1 *)0x64f2ae;
  FUN_004048d4(&local_110,uStack_12c,puVar3);
  puStack_128 = (undefined1 *)0x64f2b6;
  FUN_004048d4(&param_4);
  return;
}

