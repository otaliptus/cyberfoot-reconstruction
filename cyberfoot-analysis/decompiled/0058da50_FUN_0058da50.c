// Address: 0058da50
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0058da50(void)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined *puVar4;
  undefined4 uVar5;
  undefined1 *puVar6;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_40;
  undefined1 *puStack_3c;
  undefined1 *puStack_38;
  undefined1 local_28 [24];
  undefined4 local_10;
  undefined4 local_c;
  undefined4 local_8;
  
  puVar4 = PTR_DAT_0066b5b8;
  puStack_38 = &stack0xfffffffc;
  local_c = 0;
  local_10 = 0;
  local_8 = 0;
  puStack_3c = &LAB_0058e336;
  uStack_40 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_40;
  iVar1 = *(int *)PTR_DAT_0066afb0;
  if ((*(char *)(*(int *)puVar4 + 0x7d + iVar1 * 0x130) == '\0') ||
     ((float)*(int *)PTR_DAT_0066acb8 * _DAT_0058e344 <
      (float)*(longlong *)(*(int *)puVar4 + 0x40 + iVar1 * 0x130))) {
    if (*(int *)(*(int *)puVar4 + 0x24 + iVar1 * 0x130) == 0) {
      iVar2 = *(int *)(*(int *)PTR_DAT_0066af70 + 0x68 + *(int *)PTR_DAT_0066b2b4 * 0x2f8);
      if (iVar2 == 1) {
        if ((float)*(longlong *)(*(int *)puVar4 + 0x40 + iVar1 * 0x130) * _DAT_0058e348 <=
            (float)*(int *)PTR_DAT_0066acb8 * _DAT_0058e344) {
          *PTR_DAT_0066b62c = 1;
          *PTR_DAT_0066b35c = 1;
          *(undefined4 *)PTR_DAT_0066ac50 = 0;
        }
      }
      else if (iVar2 == 2) {
        if ((float)*(longlong *)(*(int *)puVar4 + 0x40 + iVar1 * 0x130) * _DAT_0058e34c <=
            (float)*(int *)PTR_DAT_0066acb8 * _DAT_0058e344) {
          *PTR_DAT_0066b62c = 1;
        }
      }
      else if ((float)*(longlong *)(*(int *)puVar4 + 0x40 + iVar1 * 0x130) * _DAT_0058e350 <=
               (float)*(int *)PTR_DAT_0066acb8 * _DAT_0058e344) {
        *PTR_DAT_0066b62c = 1;
      }
    }
    if (*(int *)(*(int *)puVar4 + 0x24 + iVar1 * 0x130) == 1) {
      iVar2 = *(int *)(*(int *)PTR_DAT_0066af70 + 0x6c + *(int *)PTR_DAT_0066b2b4 * 0x2f8);
      if (iVar2 == 1) {
        if ((float10)*(longlong *)(*(int *)puVar4 + 0x40 + iVar1 * 0x130) * _DAT_0058e354 <=
            (float10)*(int *)PTR_DAT_0066acb8 * (float10)_DAT_0058e344) {
          *PTR_DAT_0066b62c = 1;
          *PTR_DAT_0066b35c = 1;
          *(undefined4 *)PTR_DAT_0066ac50 = 1;
        }
      }
      else if (iVar2 == 2) {
        if ((float)*(longlong *)(*(int *)puVar4 + 0x40 + iVar1 * 0x130) * _DAT_0058e34c <=
            (float)*(int *)PTR_DAT_0066acb8 * _DAT_0058e344) {
          *PTR_DAT_0066b62c = 1;
        }
      }
      else if (iVar2 == 3) {
        if ((float)*(longlong *)(*(int *)puVar4 + 0x40 + iVar1 * 0x130) * _DAT_0058e34c <=
            (float)*(int *)PTR_DAT_0066acb8 * _DAT_0058e344) {
          *PTR_DAT_0066b62c = 1;
        }
      }
      else if ((float10)*(longlong *)(*(int *)puVar4 + 0x40 + iVar1 * 0x130) * _DAT_0058e360 <=
               (float10)*(int *)PTR_DAT_0066acb8 * (float10)_DAT_0058e344) {
        *PTR_DAT_0066b62c = 1;
      }
    }
    if (*(int *)(*(int *)puVar4 + 0x24 + iVar1 * 0x130) == 2) {
      iVar2 = *(int *)(*(int *)PTR_DAT_0066af70 + 0x70 + *(int *)PTR_DAT_0066b2b4 * 0x2f8);
      if (iVar2 == 1) {
        if ((float10)*(longlong *)(*(int *)puVar4 + 0x40 + iVar1 * 0x130) * _DAT_0058e354 <=
            (float10)*(int *)PTR_DAT_0066acb8 * (float10)_DAT_0058e344) {
          *PTR_DAT_0066b62c = 1;
          *PTR_DAT_0066b35c = 1;
          *(undefined4 *)PTR_DAT_0066ac50 = 2;
        }
      }
      else if (iVar2 == 2) {
        if ((float)*(longlong *)(*(int *)puVar4 + 0x40 + iVar1 * 0x130) * _DAT_0058e34c <=
            (float)*(int *)PTR_DAT_0066acb8 * _DAT_0058e344) {
          *PTR_DAT_0066b62c = 1;
        }
      }
      else if (iVar2 == 3) {
        if ((float)*(longlong *)(*(int *)puVar4 + 0x40 + iVar1 * 0x130) * _DAT_0058e34c <=
            (float)*(int *)PTR_DAT_0066acb8 * _DAT_0058e344) {
          *PTR_DAT_0066b62c = 1;
        }
      }
      else if ((float10)*(longlong *)(*(int *)puVar4 + 0x40 + iVar1 * 0x130) * _DAT_0058e360 <=
               (float10)*(int *)PTR_DAT_0066acb8 * (float10)_DAT_0058e344) {
        *PTR_DAT_0066b62c = 1;
      }
    }
    if (*(int *)(*(int *)puVar4 + 0x24 + iVar1 * 0x130) == 3) {
      iVar2 = *(int *)(*(int *)PTR_DAT_0066af70 + 0x74 + *(int *)PTR_DAT_0066b2b4 * 0x2f8);
      if (iVar2 == 1) {
        if ((float10)*(longlong *)(*(int *)puVar4 + 0x40 + iVar1 * 0x130) * _DAT_0058e354 <=
            (float10)*(int *)PTR_DAT_0066acb8 * (float10)_DAT_0058e344) {
          *PTR_DAT_0066b62c = 1;
          *PTR_DAT_0066b35c = 1;
          *(undefined4 *)PTR_DAT_0066ac50 = 3;
        }
      }
      else if (iVar2 == 2) {
        if ((float10)*(longlong *)(*(int *)puVar4 + 0x40 + iVar1 * 0x130) * _DAT_0058e354 <=
            (float10)*(int *)PTR_DAT_0066acb8 * (float10)_DAT_0058e344) {
          *PTR_DAT_0066b62c = 1;
        }
      }
      else if (iVar2 == 4) {
        if ((float)*(longlong *)(*(int *)puVar4 + 0x40 + iVar1 * 0x130) * _DAT_0058e34c <=
            (float)*(int *)PTR_DAT_0066acb8 * _DAT_0058e344) {
          *PTR_DAT_0066b62c = 1;
        }
      }
      else if ((float10)*(longlong *)(*(int *)puVar4 + 0x40 + iVar1 * 0x130) * _DAT_0058e360 <=
               (float10)*(int *)PTR_DAT_0066acb8 * (float10)_DAT_0058e344) {
        *PTR_DAT_0066b62c = 1;
      }
    }
    if (*(int *)(*(int *)puVar4 + 0x24 + iVar1 * 0x130) == 4) {
      iVar2 = *(int *)(*(int *)PTR_DAT_0066af70 + 0x78 + *(int *)PTR_DAT_0066b2b4 * 0x2f8);
      if (iVar2 == 1) {
        if ((float10)*(longlong *)(*(int *)puVar4 + 0x40 + iVar1 * 0x130) * _DAT_0058e354 <=
            (float10)*(int *)PTR_DAT_0066acb8 * (float10)_DAT_0058e344) {
          *PTR_DAT_0066b62c = 1;
          *PTR_DAT_0066b35c = 1;
          *(undefined4 *)PTR_DAT_0066ac50 = 4;
        }
      }
      else if (iVar2 == 2) {
        if ((float)*(longlong *)(*(int *)puVar4 + 0x40 + iVar1 * 0x130) * _DAT_0058e34c <=
            (float)*(int *)PTR_DAT_0066acb8 * _DAT_0058e344) {
          *PTR_DAT_0066b62c = 1;
        }
      }
      else if ((float10)*(longlong *)(*(int *)puVar4 + 0x40 + iVar1 * 0x130) * _DAT_0058e36c <=
               (float10)*(int *)PTR_DAT_0066acb8 * (float10)_DAT_0058e344) {
        *PTR_DAT_0066b62c = 1;
      }
    }
  }
  else {
    *PTR_DAT_0066b62c = 1;
  }
  puVar6 = &stack0xfffffffc;
  if (*PTR_DAT_0066b62c != '\0') {
    FUN_00642c50(0x230,&local_c);
    uVar5 = local_c;
    FUN_004030d4(local_28,*(int *)puVar4 + iVar1 * 0x130);
    FUN_004030a4(local_28,&DAT_0058e378,0x15);
    FUN_00405194(&local_10,local_28);
    FUN_004052cc(&local_8,local_10,uVar5);
    iVar1 = *(int *)(*(int *)PTR_DAT_0066af70 + 0x7c +
                    *(int *)(*(int *)puVar4 + 0x20 + *(int *)PTR_DAT_0066afb0 * 0x130) * 0x2f8);
    iVar2 = *(int *)(*(int *)PTR_DAT_0066af70 + 0x7c + *(int *)(PTR_DAT_0066ac78 + 8) * 0x2f8);
    puVar6 = puStack_38;
    if (*(int *)(PTR_DAT_0066ac78 + 0x168) == 2) {
      if ((iVar1 < iVar2) && (iVar1 == 1)) {
        if ((*(int *)(*(int *)PTR_DAT_0066af70 + 0x98 +
                     *(int *)(*(int *)puVar4 + 0x20 + *(int *)PTR_DAT_0066afb0 * 0x130) * 0x2f8) <
             0x14) || (*(char *)(*(int *)puVar4 + 0x7d + *(int *)PTR_DAT_0066afb0 * 0x130) != '\0'))
        {
          *PTR_DAT_0066b62c = 0;
          *PTR_DAT_0066b7a4 = 1;
          *(undefined4 *)PTR_DAT_0066acb4 = 0x40400000;
        }
        else {
          *PTR_DAT_0066b62c = 0;
          FUN_0040502c(PTR_DAT_0066b124,local_8);
          puVar6 = puStack_38;
        }
      }
    }
    else if (iVar1 < iVar2) {
      if (iVar1 == 1) {
        if (iVar2 == 2) {
          iVar3 = *(int *)PTR_DAT_0066afb0;
          if ((*(int *)(*(int *)PTR_DAT_0066af70 + 0x98 +
                       *(int *)(*(int *)puVar4 + 0x20 + iVar3 * 0x130) * 0x2f8) < 0x14) ||
             (*(char *)(*(int *)puVar4 + 0x7d + iVar3 * 0x130) != '\0')) {
            *PTR_DAT_0066b62c = 0;
            *PTR_DAT_0066b7a4 = 1;
            if (*(int *)(*(int *)puVar4 + 0x28 + iVar3 * 0x130) < 0x33) {
              *(undefined4 *)PTR_DAT_0066acb4 = 0x40400000;
            }
            else {
              *(undefined4 *)PTR_DAT_0066acb4 = 0x40800000;
            }
          }
          else {
            *PTR_DAT_0066b62c = 0;
            FUN_0040502c(PTR_DAT_0066b124,local_8);
          }
        }
        else if (iVar2 == 3) {
          iVar3 = *(int *)PTR_DAT_0066afb0;
          if ((*(int *)(*(int *)PTR_DAT_0066af70 + 0x98 +
                       *(int *)(*(int *)puVar4 + 0x20 + iVar3 * 0x130) * 0x2f8) < 0x14) ||
             (*(char *)(*(int *)puVar4 + 0x7d + iVar3 * 0x130) != '\0')) {
            *PTR_DAT_0066b62c = 0;
            *PTR_DAT_0066b7a4 = 1;
            if (*(int *)(*(int *)puVar4 + 0x28 + iVar3 * 0x130) < 0x29) {
              *(undefined4 *)PTR_DAT_0066acb4 = 0x40400000;
            }
            else {
              *(undefined4 *)PTR_DAT_0066acb4 = 0x40a00000;
            }
          }
          else {
            *PTR_DAT_0066b62c = 0;
            FUN_0040502c(PTR_DAT_0066b124,local_8);
          }
        }
        else if (iVar2 == 4) {
          *PTR_DAT_0066b62c = 0;
          FUN_0040502c(PTR_DAT_0066b124,local_8);
        }
      }
      puVar6 = puStack_38;
      if (iVar1 == 2) {
        if (iVar2 == 3) {
          if ((*(int *)(*(int *)PTR_DAT_0066af70 + 0x98 +
                       *(int *)(*(int *)puVar4 + 0x20 + *(int *)PTR_DAT_0066afb0 * 0x130) * 0x2f8) <
               0x14) ||
             (*(char *)(*(int *)puVar4 + 0x7d + *(int *)PTR_DAT_0066afb0 * 0x130) != '\0')) {
            *PTR_DAT_0066b62c = 0;
            *PTR_DAT_0066b7a4 = 1;
            *(undefined4 *)PTR_DAT_0066acb4 = 0x40000000;
          }
          else {
            *PTR_DAT_0066b62c = 0;
            FUN_0040502c(PTR_DAT_0066b124,local_8);
            puVar6 = puStack_38;
          }
        }
        else if (iVar2 == 4) {
          if ((*(int *)(*(int *)PTR_DAT_0066af70 + 0x98 +
                       *(int *)(*(int *)puVar4 + 0x20 + *(int *)PTR_DAT_0066afb0 * 0x130) * 0x2f8) <
               0x12) ||
             (*(char *)(*(int *)puVar4 + 0x7d + *(int *)PTR_DAT_0066afb0 * 0x130) != '\0')) {
            *PTR_DAT_0066b62c = 0;
            *PTR_DAT_0066b7a4 = 1;
            *(undefined4 *)PTR_DAT_0066acb4 = 0x40400000;
          }
          else {
            *PTR_DAT_0066b62c = 0;
            FUN_0040502c(PTR_DAT_0066b124,local_8);
            puVar6 = puStack_38;
          }
        }
      }
    }
  }
  puStack_38 = puVar6;
  puVar6 = puStack_38;
  *in_FS_OFFSET = uStack_40;
  puStack_38 = &LAB_0058e33d;
  puStack_3c = (undefined1 *)0x58e335;
  FUN_00405008(&local_10,3,puVar6);
  return;
}

